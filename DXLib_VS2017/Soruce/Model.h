#ifndef MODEL_H_
#define MODEL_H_

#include "DxLib.h"

// ���f���̓ǂݍ��݃N���X
class Model 
{
public:
	// �ǂݍ���
	static void Load();
	// �`��
	static void Draw(int model, VECTOR position, VECTOR rotation, VECTOR scale);

public:
	// �V���v�����f��
	static int SimpleModel;
};

#endif // !MODEL_H_
