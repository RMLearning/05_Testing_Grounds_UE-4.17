// Fill out your copyright notice in the Description page of Project Settings.

//#include "ChooseNextWaypoint.h"
#include "../Public/ChooseNextWaypoint.h"

EBTNodeResult::Type UChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	UE_LOG(LogTemp, Warning, TEXT("ExecuteTask in C++"))

	return EBTNodeResult::Succeeded;
}
