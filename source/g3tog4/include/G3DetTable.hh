#ifndef G3DETTABLE
#define G3DETTABLE 1
// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G3DetTable.hh,v 1.4 1999/12/05 17:50:01 gcosmo Exp $
// GEANT4 tag $Name: geant4-01-00 $
//
// G3DetTable class

#include "g4std/map"
#include "globals.hh"
#include "G3DetTableEntry.hh"

class G3DetTable {
private:
  G4std::map<G4String, G3DetTableEntry*, less<G4String> > DTD;
  G4String MakeHash(G4String& set, G4String& det);

public:
  G3DetTable();
  virtual ~G3DetTable();
  G4int GetID(G4String& set, G4String& det);
  void Put(G4String& set, G4String& det, G4int id, G4VSensitiveDetector* D);
  G4VSensitiveDetector* GetSD(G4String& set, G4String& det); 
  void PrintAll();
};

extern G3DetTable G3Det;
#endif