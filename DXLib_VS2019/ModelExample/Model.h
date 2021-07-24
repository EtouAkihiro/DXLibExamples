#ifndef MODEL_H_
#define MODEL_H_

#include "DxLib.h"

class DXTransform;

// ���f���̓ǂݍ��݃N���X
class Model 
{
public:
	// �ǂݍ���
	static void Load();
	// �`��iVector�Łj
	static void Draw(int& model, VECTOR& position, VECTOR& rotation, VECTOR& scale);
	// �`��iTransform�Łj
	static void Draw(int& model, DXTransform& transform);

public:
	// �V���v�����f��
	static int SimpleModel;
};

#endif // !MODEL_H_
