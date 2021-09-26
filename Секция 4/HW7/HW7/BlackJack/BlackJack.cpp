#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

// HW3
enum Suit { Hearts, Tiles, Clovers, Pikes };
enum CardVal { one, two, three, four, five, six, seven, eight, nine, ten, Val, Dam, King, Ace };

class Card
{
public:
    bool flip;
    Suit suit;
    CardVal val;
    Card()
    {
        suit = Hearts;
        val = one;
        flip = false;
    }
    Card(Suit s1, CardVal v1, bool f1) : suit(s1), val(v1), flip(f1) {
    };
    void Flip()
    {
        if (flip == true)
            flip = false;
        else
            flip = true;
    };
    int GetValue()
    {
        if (val > 9 && val != 13)
        {
            return 10;
        }
        else if (val == 13)
        {
            return 1;
        }
        else
        {
            return (val + 1);
        }
    }
	friend ostream& operator<<(ostream& os, const Card& aCard);
};
// HW3

// ===================== HW4 =====================

class Hand
{
public:
	std::vector<Card*> mHand;
	Hand()
	{
		mHand.reserve(7);
	}
	void Add(Card* newCard)
	{
		mHand.push_back(newCard);
	}
	void Clear()
	{
		vector<Card*>::iterator iter = mHand.begin();
		for (iter = mHand.begin(); iter != mHand.end(); ++iter)
		{
			delete* iter;
			*iter = 0;
		}
		mHand.clear();
	}
	int GetTotal() const
	{
		if (mHand.empty())
		{
			return 0;
		}
		int r = 0;
		for (size_t i = 0; i < mHand.size(); i++)
		{
			Card Q = *mHand[i];
			if (Q.val == Ace && r <= 21)
			{
				r = r + 11;
			}
			else
			{
				r = r + Q.GetValue();
			}
		}
		return r;
	}
};
// ===================== HW4 =====================

// =================================== HW5 ===================================

class GenericPlayer : public Hand
{
	friend ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer);
public:
	string m_Name;
	GenericPlayer(const string& name = "") : m_Name(name)
	{
	}
	GenericPlayer(string Name) : m_Name(Name)
	{

	}
	virtual bool IsHitting() const = 0;
	bool IsBoosted() const
	{
		return (GetTotal() > 21);
	}
	void Bust() const
	{
		cout << m_Name << " busts" << endl;
	}
};


// =================================== HW5 ===================================

// =================================== HW6 ===================================

class Player : public GenericPlayer
{
public:
	string m_PlayerName;
	Player(string N) : m_PlayerName(N)
	{
		GenericPlayer::m_Name = N;
	};
	bool IsHitting() const
	{
		char answer;
		cout << m_PlayerName << ", do you want to take card? (Y/N)";
		cin >> answer;
		if ((answer == 'y') || (answer == 'Y'))
			return true;
		else
			return false;
	}
	void Win() const
	{
		cout << m_PlayerName << " is won!" << endl;
	}
	void Lose() const
	{
		cout << m_PlayerName << " is lose!" << endl;
	}
	void Push() const
	{
		cout << m_PlayerName << "  push!" << endl;
	}
};


class House : public GenericPlayer
{
public:
	string HouseName = "House";
	House(const string& name = "House")
	{
	};
	virtual bool IsHitting() const
	{
		if (Hand::GetTotal() <= 16)
			return true;
		else
			return false;
	}
	void FlipFirstCard()
	{
		if (!(mHand.empty()))
			mHand[0]->Flip();
		else
			cout << "Nothing to flip" << endl;
	}
};



ostream& operator<< (ostream& out, const Card& aCard)
{

	const string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
	const string SUITS[] = { "c", "d", "h", "s" };
	if (aCard.flip)
	{
		out << RANKS[aCard.val] << SUITS[aCard.suit];
	}
	else
	{
		out << "XX";
	}
	return out;
}

ostream& operator<<(ostream& os, const GenericPlayer& aGenericPlayer)
{
	os << aGenericPlayer.m_Name << ":\t";

	vector<Card*>::const_iterator pCard;
	if (!aGenericPlayer.mHand.empty())
	{
		for (pCard = aGenericPlayer.mHand.begin();
			pCard != aGenericPlayer.mHand.end();
			++pCard)
		{
			os << *(*pCard) << "\t";
		}


		if (aGenericPlayer.GetTotal() != 0)
		{
			cout << "(" << aGenericPlayer.GetTotal() << ")";
		}
	}
	else
	{
		os << "<empty>";
	}

	return os;
}


/*
ostream& operator<< (ostream& out, const Player& player)
{
	out << player.m_PlayerName;
	return out;
}


ostream& operator<< (ostream& out, const House& house)
{
	out << house.HouseName;
	return out;
}
*/
// =================================== HW6 ===================================

// =================================== HW7 ===================================
class Deck : public Hand
{
public:
	Deck();

	virtual ~Deck();

	void Populate();
	void Shuffle();
	void Deal(Hand& mHand);
	void AdditionalCards(GenericPlayer& aGenericPlayer);
};

Deck::Deck()
{
	mHand.reserve(52);
	Populate();
}

Deck::~Deck()
{

}

void Deck::Populate()
{
	Clear();
	for (int s = Suit::Hearts; s <= Suit::Pikes; ++s)
	{
		for (int r = CardVal::one; r <= CardVal::Ace; ++r)
		{
			Add(new Card(static_cast<Suit>(s), static_cast<CardVal>(r), 0));
		}
	}
}

void Deck::Shuffle()
{
	random_shuffle(mHand.begin(), mHand.end());
}

void Deck::Deal(Hand& aHand)
{
	if (!mHand.empty())
	{
		aHand.Add(mHand.back());
		mHand.pop_back();
	}
	else
	{
		cout << "Out of cards. Unable to deal.";
	}
}

void Deck::AdditionalCards(GenericPlayer& aGenericPlayer)
{
	cout << endl;
	while (!(aGenericPlayer.IsBoosted()) && aGenericPlayer.IsHitting())
	{
		Deal(aGenericPlayer);
		cout << aGenericPlayer << endl;
		if (aGenericPlayer.IsBoosted())
		{
			aGenericPlayer.Bust();
		}
	}
}

class Game
{
private:
	Deck m_Deck;
	House m_House;
	vector<Player> m_Players;
public:
	Game(const vector<string>& names);
	~Game();
	void Play();
};

Game::Game(const vector<string>& names)
{
	vector<string>::const_iterator pName;
	for (pName = names.begin(); pName != names.end(); ++pName)
	{
		m_Players.push_back(Player(*pName));
	}
	srand(static_cast<unsigned int>(time(0)));
	m_Deck.Populate();
	m_Deck.Shuffle();
}

Game::~Game()
{

}

void Game::Play()
{
	vector<Player>::iterator pPlayer;
	for (int i = 0; i < 2; ++i)
	{
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
		{
			m_Deck.Deal(*pPlayer);
		}
		m_Deck.Deal(m_House);
	}
	m_House.FlipFirstCard();

	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
	{
		cout << *pPlayer << endl;
	}
	cout << m_House << endl;

	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
	{
		m_Deck.AdditionalCards(*pPlayer);
	}
	m_House.FlipFirstCard();
	cout << endl << m_House;
	m_Deck.AdditionalCards(m_House);
	if (m_House.IsBoosted())
	{
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
		{
			if (!(pPlayer->IsBoosted()))
			{
				pPlayer->Win();
			}
		}
	}
	else
	{
		for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
		{
			if (!(pPlayer->IsBoosted()))
			{
				if (pPlayer->GetTotal() > m_House.GetTotal())
				{
					pPlayer->Win();
				}
				else if (pPlayer->GetTotal() < m_House.GetTotal())
				{
					pPlayer->Lose();
				}
				else
				{
					pPlayer->Push();
				}
			}
		}
	}
	for (pPlayer = m_Players.begin(); pPlayer != m_Players.end(); ++pPlayer)
	{
		pPlayer->Clear();
	}
	m_House.Clear();
}

// =================================== HW7 ===================================

int main()
{
	int n;
	cout << "Enter nomber of players: " << endl;
	cin >> n;
	vector<string> Players(n);
	for (int i = 0; i < n; i++)
	{
		cout << "Enter nomber of " << i << " player: ";
		cin >> Players[i];
	}
	Game G = Game(Players);
	bool next = true;
	while (next == true)
	{
		G.Play();
		cout << "Do you want to replay? (Y/N): ";
		char answer;
		cin >> answer;
		if (answer == 'Y' || answer == 'y')
			next = true;
		else
			next = false;
	}
}


// PS всё ещё тяжело разбивать программу на модули, поэтому пока сдам так. Позже, как по-свободней будет, попробую разбить её.