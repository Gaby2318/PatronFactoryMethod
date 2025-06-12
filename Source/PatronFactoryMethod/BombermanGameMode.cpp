// Fill out your copyright notice in the Description page of Project Settings.


#include "BombermanGameMode.h"
#include "Bloques.h"
#include "Enemigos.h"
#include "FabricaBloques.h"
#include "BloqueDestructible.h"


ABombermanGameMode::ABombermanGameMode()
{
	// 15 bloques de ancho
	LabWidth = 15;
	// 15 bloques de alto
	LabHeight = 15;
	// Espacio entre bloques
	BlockSpacing = 100.0f; // Espacio entre bloques en unidades del mundo
}

void ABombermanGameMode::BeginPlay()
{
	Super::BeginPlay();
	GenerarLaberinto(10, 10); // Ejemplo de generación de laberinto con dimensiones 10x10
	GenerarEnemigos(5); // Ejemplo de generación de 5 enemigos
}

void ABombermanGameMode::GenerarLaberinto(int32 Width, int32 Heigth)
{
	// Limpiar bloques existentes
	BlocksMap.Empty();

	// Generar patrón básico (aquí puedes implementar 
	// tu algoritmo de generación de laberinto)
	
	for (int32 X = 0; X < Width; ++X)
	{
		for (int32 Y = 0; Y < Heigth; ++Y)
		{
			int32 BlockID = BlockIDCounter++;
			FString BlockType = "Normal"; // Aquí puedes definir la lógica para el tipo de bloque
			// Crear un nuevo bloque (esto debería ser reemplazado por la lógica de creación real)
			ABloques* NewBlock = GetWorld()->SpawnActor<ABloques>();
			if (NewBlock)
			{
				//NewBlock->InicializarBlock(BlockID, BlockType);
				BlocksMap.Add(BlockID, NewBlock);
			}
		}
	}
	// Spawnear bloques según el patrón
	// Aquí puedes implementar la lógica para colocar los bloques en el mundo
	for (const auto& BlockPair : BlocksMap)
	{
		ABloques* Block = BlockPair.Value;
		if (Block)
		{
			FVector SpawnLocation = FVector(BlockPair.Key % Width * BlockSpacing, BlockPair.Key / Width * BlockSpacing, 0.0f);
			Block->SetActorLocation(SpawnLocation);
			Block->InicializarBlock(BlockPair.Key, "Normal"); // Aquí puedes definir el tipo de bloque
		}
	}
}

void ABombermanGameMode::GenerarEnemigos(int32 EnemyCount)
{ // Limpiar enemigos existentes
	EnemiesArray.Empty();
	// Generar enemigos
	for (int32 i = 0; i < EnemyCount; ++i)
	{
		AEnemigos* NewEnemy = GetWorld()->SpawnActor<AEnemigos>();
		if (NewEnemy)
		{
			EnemiesArray.Add(NewEnemy);
		}
	}
}
