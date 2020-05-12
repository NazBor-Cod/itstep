#pragma once
#include <string>

#include "card.h"
#include "console.h"

using namespace std;

namespace playerstd {

	class Player : virtual public console::ConsoleOut, public cardstd::CardsCombination {
	private:
		string m_lpName;
		int m_moneys;
		int m_bet;
		bool m_winer;

	public:
		Player(COORD p_crd, COORD p_name, COORD p_money, COORD p_comb, string name = "Player");
		//////��������� ����� ������
		string getName();
		//////��������� ������� �� �����
		int getMoney();
		//////��������� ����� �������� ������
		size_t getBet();
		//////���������� ������ ������ �������/��������
		bool getWin();
		//////����� ������ � ������� � �������
		void resetBet();
		//////��������� ������� ����������
		void isWiner();
		//////��������� ������� �� ��������� (��������)
		void resetWin();
		//////��������� �������� � ���������� � �������
		void takeWin(int win);
		//////������ ������ ������ (����� � ������ ��������)
		void fillPlayerData();
		void clearPlayerData(bool all = false);
		//////����� ����� �� �������� (������� c�����)
		int popMoney(int sum);
		/////������� ����� �� ������ (�� �������)
		/////������������ ������ ������ ������� ����� ��������
		int pushMoney(int sum);
	};
}
