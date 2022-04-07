#include "stdafx.h"
#include "Resource.h"
#include <mmsystem.h>
#include <ddraw.h>
#include "audio.h"
#include "gamelib.h"
#include "CScore.h"

namespace game_framework {
	/////////////////////////////////////////////////////////////////////////////
	// CBall: Ball class
	/////////////////////////////////////////////////////////////////////////////

	CScore::CScore()
	{
		myScore = 0;
	}

	void CScore::LoadBitmap() {
		SCORE_text.LoadBitmap(IDB_SCORE_TEXT, RGB(255, 255, 255));
	}

	void CScore::OnShow() {
		SCORE_text.ShowBitmap();
	}

	void CScore::SetTopLeft() {
		SCORE_text.SetTopLeft(800, 50);
	}
	
	void CScore::setScore(int profit) {
		myScore += profit;
	}

	int CScore::getScore() {
		return myScore;
	}
}