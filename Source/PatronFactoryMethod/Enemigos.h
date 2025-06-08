// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//#include "TipoBloques.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigos.generated.h"

UCLASS()
class PATRONFACTORYMETHOD_API AEnemigos : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigos();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Tipo de enemigo
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy Properties")
	//ETipoBloques EnemyType;

	// Inicializar enemigo
	UFUNCTION(BlueprintCallable, Category = "Enemigo")
	void InicializarEnemigo(int32 ID, const FString& Type);

	// Comportamiento individual
	virtual void ComportamientoEnemigo();
};
