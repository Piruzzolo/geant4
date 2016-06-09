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
// $Id: RE01CalorimeterSD.hh,v 1.1 2004/11/26 07:37:39 asaim Exp $
// GEANT4 tag $Name: geant4-07-00-cand-01 $
//


#ifndef RE01CalorimeterSD_h
#define RE01CalorimeterSD_h 1

#include "G4VSensitiveDetector.hh"
#include "RE01CalorimeterHit.hh"
class G4Step;
class G4HCofThisEvent;
class G4TouchableHistory;

class RE01CalorimeterSD : public G4VSensitiveDetector
{

  public:
      RE01CalorimeterSD(G4String name);
      ~RE01CalorimeterSD();

      void Initialize(G4HCofThisEvent*HCE);
      G4bool ProcessHits(G4Step*aStep,G4TouchableHistory*ROhist);
      void EndOfEvent(G4HCofThisEvent*HCE);
      void clear();
      void DrawAll();
      void PrintAll();

  private:
      RE01CalorimeterHitsCollection *CalCollection;
      int CellID[20][48];
      const int numberOfCellsInZ;
      const int numberOfCellsInPhi;
};




#endif
