// CProcess.cpp: 구현 파일
//

#include "stdafx.h"
#include "gPrj.h"
#include "CProcess.h"


// CProcess

CProcess::CProcess()
{
}

CProcess::~CProcess()
{
}
int CProcess::getStarInfo(CImage *plmage,int nTh) {
	unsigned char* fm = (unsigned char*)plmage->GetBits();
	int nWidth = plmage->GetWidth();
	int nHeight = plmage->GetHeight();
	int nPitch = plmage->GetPitch();

	int nSum = 0;
	for (int k = 0; k < nWidth * nHeight; k++)
	{
		if (fm[k] > nTh)
			nSum++;
	}
	return nSum;
}

// CProcess 멤버 함수
