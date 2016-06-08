// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4VisCommandsCameraMessengers.hh,v 1.2.8.1 1999/12/07 20:53:54 gunter Exp $
// GEANT4 tag $Name: geant4-01-00 $
//
// 
// Messengers for /vis~/camera commands - John Allison  6th April 1998.

#ifndef G4VISCOMMANDSCAMERAMESSENGERS_HH
#define G4VISCOMMANDSCAMERAMESSENGERS_HH

#include "globals.hh"
#include "G4UImessenger.hh"

class G4UIcommand;

class G4VisCommandsCameraSetMessenger: public G4UImessenger {
public:
  G4VisCommandsCameraSetMessenger ();
  ~G4VisCommandsCameraSetMessenger ();
  G4String GetCurrentValue(G4UIcommand * command);
  void SetNewValue (G4UIcommand* command, G4String newValues);
private:
  G4UIcommand* fpCommand;
};

#endif