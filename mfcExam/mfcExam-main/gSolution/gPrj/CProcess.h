#pragma once

// CProcess 명령 대상

class CProcess : public CObject
{
public:
	CProcess();
	virtual ~CProcess();

	int getStarInfo(CImage *plmage,int nTh= 100);
};


