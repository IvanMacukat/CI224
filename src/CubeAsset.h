#include "GameAsset.h"

#ifndef CUBEASSET_H_
#define CUBEASSET_H_

// CubeAsset extends GameAsset

class CubeAsset: public GameAsset {
public:
	CubeAsset();
	CubeAsset(float x, float y, float z);
	~CubeAsset();

	virtual void update();
	virtual void draw();
};

#endif /* CUBEASSET_H_ */
