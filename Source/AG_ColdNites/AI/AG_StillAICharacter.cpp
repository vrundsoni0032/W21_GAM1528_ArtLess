#include "AG_StillAICharacter.h"
#include "AG_ColdNites/Player/AG_PlayableCharacter.h"

AAG_StillAICharacter::AAG_StillAICharacter()
{
	Tags.Add("AG_StillAI");
}

void AAG_StillAICharacter::BeginPlay()
{
	Super::BeginPlay();
}

void AAG_StillAICharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if(IsActorInRange("AG_PlayableCharacter", GetActorForwardVector(), 1))
	{
		if (bIsAITurn)
		{
			MoveForward();
			PlayerCharacter->KnockOut(GetActorForwardVector());
		}
	}
}
