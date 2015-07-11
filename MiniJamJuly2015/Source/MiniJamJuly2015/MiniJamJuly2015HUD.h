// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "MiniJamJuly2015HUD.generated.h"

UCLASS()
class AMiniJamJuly2015HUD : public AHUD
{
	GENERATED_BODY()

public:
	AMiniJamJuly2015HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

