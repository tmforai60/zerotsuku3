// �J�E���^�N���XCounter�i��P�Łj

#ifndef ___Class_Counter
#define ___Class_Counter

#include <climits>

//===== �J�E���^�N���X =====//
class Counter {
	unsigned cnt;		// �J�E���^

public:
	//--- �R���X�g���N�^ ---//
	Counter() : cnt(0) { }

	//--- �J�E���g�A�b�v ---//
	void increment() {
		if (cnt < UINT_MAX) cnt++;		// �J�E���^�̏����UINT_MAX
	}

	//--- �J�E���g�_�E�� ---//
	void decrement() {
		if (cnt > 0) cnt--;				// �J�E���^�̉�����0
	}

	//--- �J�E���^��ԋp ---//
	unsigned value() {					// cnt�̃Q�b�^
		return cnt;
	}
};

#endif
