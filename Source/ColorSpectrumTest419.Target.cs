// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class ColorSpectrumTest419Target : TargetRules
{
	public ColorSpectrumTest419Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "ColorSpectrumTest419" } );
	}
}
