$scriptDir = split-path -parent $MyInvocation.MyCommand.Definition

cd $scriptDir

if ( -not(Test-Path -Path './Build' -PathType Container))
{	
	mkdir Build
}

cd Build

cmake -G "Visual Studio 15 2017 Win64" ..

cd ..