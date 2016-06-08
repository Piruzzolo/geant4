// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: G4OmegaMinusInelasticProcess.hh,v 1.1.10.1 1999/12/07 20:52:29 gunter Exp $
// GEANT4 tag $Name: geant4-01-00 $
//
 // Hadronic Process: OmegaMinus Inelastic Process
 // J.L. Chuma, TRIUMF, 05-Nov-1996
 // Last modified: 03-Apr-1997

 // Note:  there is no .cc file
 
#ifndef G4OmegaMinusInelasticProcess_h
#define G4OmegaMinusInelasticProcess_h 1
 
//#include "G4HadronicInelasticProcess.hh"
#include "G4HadronInelasticProcess.hh"
 
// class G4OmegaMinusInelasticProcess : public G4HadronicInelasticProcess
 class G4OmegaMinusInelasticProcess : public G4HadronInelasticProcess
 {
 public:
    
    G4OmegaMinusInelasticProcess(
     const G4String& processName = "OmegaMinusInelastic" ) :
      //      G4HadronicInelasticProcess( processName, G4OmegaMinus::OmegaMinus() )
      G4HadronInelasticProcess( processName, G4OmegaMinus::OmegaMinus() )
    { }
    
    ~G4OmegaMinusInelasticProcess()
    { }
 };
 
#endif
 