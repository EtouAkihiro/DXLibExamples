#include "Model.h"

#include "DxLib.h"
#include "DXTransform.h"


// �V���v�����f��
int Model::SimpleModel{ -1 };

// ���f���̓ǂݍ���
void Model::Load()
{
	SimpleModel = MV1LoadModel("Models/Robot Kyle.mv1");
}

// �`��iVector�Łj
void Model::Draw(int model, VECTOR position, VECTOR rotation, VECTOR scale)
{
	// ���f���̍��W��ݒ�
	MV1SetPosition(model,position);
	// ���f���̉�]��ݒ�
	MV1SetRotationXYZ(model, rotation);
	// ���f���̑傫����ݒ�
	MV1SetScale(model, scale);
	// �`��
	MV1DrawModel(model);
}

// �`��iTransform�Łj
void Model::Draw(int model, DXTransform transform)
{
	// ���f���̍��W��ݒ�
	MV1SetPosition(model, transform.Position());
	// ���f���̉�]��ݒ�
	MV1SetRotationXYZ(model, transform.Rotation());
	// ���f���̑傫��
	MV1SetScale(model, transform.Scale());
	// �`��
	MV1DrawModel(model);
}
