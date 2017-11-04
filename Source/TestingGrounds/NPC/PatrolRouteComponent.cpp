// Fill out your copyright notice in the Description page of Project Settings.

#include "PatrolRouteComponent.h"


UPatrolRouteComponent::UPatrolRouteComponent() {
	PrimaryComponentTick.bCanEverTick = false;
}

TArray<AActor*> UPatrolRouteComponent::GetPatrolPoints() const {
	return PatrolPoints;
}
