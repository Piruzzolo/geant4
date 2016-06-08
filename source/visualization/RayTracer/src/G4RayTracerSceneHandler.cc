//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
//
// $Id: G4RayTracerSceneHandler.cc,v 1.2 2001/07/11 10:09:05 gunter Exp $
// GEANT4 tag $Name: geant4-05-00 $

#include "G4RayTracerSceneHandler.hh"

G4RayTracerSceneHandler::G4RayTracerSceneHandler(G4VGraphicsSystem& system,
						 const G4String& name):
  G4VSceneHandler(system, fSceneIdCount++, name)
{
  fSceneCount++;
}

G4RayTracerSceneHandler::~G4RayTracerSceneHandler()
{
  fSceneCount--;
}

G4int G4RayTracerSceneHandler::GetSceneCount() {
  return fSceneCount;
}

G4int G4RayTracerSceneHandler::fSceneIdCount = 0;

G4int G4RayTracerSceneHandler::fSceneCount = 0;