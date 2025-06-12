// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BombermanGameMode.generated.h"
class ABloques;
class AEnemigos;
/*** 
 */
UCLASS()
class PATRONFACTORYMETHOD_API ABombermanGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABombermanGameMode();

protected:
	virtual void BeginPlay() override;

	// Generar el laberinto
	UFUNCTION(BlueprintCallable, Category = "Bomberman")
	void GenerarLaberinto(int32 Width, int32 Heigth);

	// Generar enemigos
	void GenerarEnemigos(int32 EnemyCount);

public:
   
	// Almacenamiento de bloques
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bomberman")
	TMap<int32, ABloques*> BlocksMap;

	// Almacenamiento de enemigos
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Bomberman")
	TArray<AEnemigos*> EnemiesArray;

	// ID counter para bloques
	int32 BlockIDCounter;

	// Ancho del laberinto (configurable en editor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomberman")
	int32 LabWidth;

	// Alto del laberinto (configurable en editor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomberman")
	int32 LabHeight;

	// Espacio entre bloques
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bomberman")
	float BlockSpacing;


	// Patrón de laberinto, puede ser generado proceduralmente
	//TArray<TArray<ETipoBloques>> MazePattern;
	
};
