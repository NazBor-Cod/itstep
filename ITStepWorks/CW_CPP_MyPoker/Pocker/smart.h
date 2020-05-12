#pragma once
#include <vector>
#include <array>

#include "card.h"

using namespace std;
using namespace cardstd;

enum result {null=-1, dropCards = 0, equaliseBet, rizeBet, hightRizeBet, maxBet};

namespace smartstd {
	class Smart
	{
	private:
		result m_res;
		array<int, 2> m_pHoldCards;
	public:
		Smart();
		/////////�������� ��������� ��������� ��������
		result getAction();
		////////�������� ������� ���� �� ������ (�� 2�)
		int* getholdCards();
		////////����� ������ �������� �����������
		void smrtAction(cardstd::combinations pwrComb, vector<size_t> _ind, int bet);

	};
}
