#include "stdafx.h"
#include "Player2.h"


Player2::Player2()
{
}


Player2::~Player2()
{
}

// �������֐��ł��B���񂱂̊֐��͐G��܂���B
void Player2::Init(void) {
	strength = KAI;
	/* �����n��̕ύX */
	srand((unsigned)time(NULL));
}

// ���񂱂̊֐��͐G��܂���B
int Player2::GetCondition() {
	return strength;
}

// ���񂱂̊֐��͐G��܂���B
void Player2::SetDamage(int damege) {
	strength -= damege;
	if (strength <= 0) aliveChek = false;
}

// ���񂱂������������đΐ킵�܂��B
// ���݂́A�����_���ɃW�����P���̎���o���Ă��܂��B
// JANKEN�@�́@stdafx.h �Œ�`���Ă��܂��B
// �߂�l��GU,CHYOKI,PA�̂����ꂩ��ݒ肵�Ă��������B
// ���݂܂ł̎������́@GResult.size()�@�Ŏ擾�ł��܂��B
// �������͂��ꂼ�� Player1:p1r  Player2:p2r �Ŏ擾�ł��܂��B
JANKEN Player2::Attack() {
	JANKEN janken[] = { GU,CHYOKI,PA };

	return janken[rand() % 3];
}
