/* 
A* -------------------------------------------------------------------
B* This file contains source code for the PyMOL computer program
C* copyright 1998-2000 by Warrn Lyford Delano of DeLano Scientific. 
D* -------------------------------------------------------------------
E* It is unlawful to modify or remove this copyright notice.
F* -------------------------------------------------------------------
G* Please see the accompanying LICENSE file for further information. 
H* -------------------------------------------------------------------
I* Additional authors of this source file include:
-* 
-* 
-*
Z* -------------------------------------------------------------------
*/
#ifndef _H_PyMOLGlobals
#define _H_PyMOLGlobals

/* all of the private singleton classes associated with a PyMOL instance */

/* this gets included in virtually every PyMOL source file, so keep it
   short and sweet */

typedef struct _CMemoryCache CMemoryCache;
typedef struct _CIsosurf CIsosurf;
typedef struct _CTetsurf CTetsurf;
typedef struct _CSphere CSphere;
typedef struct _CFeedback CFeedback;
typedef struct _CUtil CUtil;
typedef struct _CColor CColor;
typedef struct _CMovie CMovie;
typedef struct _CControl CControl;
typedef struct _CButMode CButMode;
typedef struct _COrtho  COrtho;
typedef struct _CWord  CWord;
typedef struct _CCGORenderer CCGORenderer;
typedef struct _CCharacter CCharacter;
typedef struct _CPop CPop;
typedef struct _CScene CScene;
typedef struct _CSeq CSeq;
typedef struct _CSetting CSetting;
typedef struct _CText CText;
typedef struct _CWizard CWizard;
typedef struct _CAtomInfo CAtomInfo;
typedef struct _CSculptCache CSculptCache;
typedef struct _CVFont CVFont;
typedef struct _CEditor CEditor;
typedef struct _CExecutive CExecutive;
typedef struct _CSeeker CSeeker;
typedef struct _CSelector CSelector;

typedef struct _PyMOLGlobals PyMOLGlobals;
struct _PyMOLGlobals {

  CMemoryCache *MemoryCache; /* could probably eliminate this... */
  CIsosurf  *Isosurf;
  CTetsurf  *Tetsurf;
  CSphere   *Sphere;
  CFeedback *Feedback;
  CUtil     *Util;
  CColor    *Color;
  CMovie    *Movie;
  CControl  *Control;
  CButMode  *ButMode;
  COrtho    *Ortho;
  CWord     *Word;
  CCGORenderer *CGORenderer;
  CCharacter   *Character;
  CPop      *Pop;
  CScene    *Scene;
  CSeq      *Seq;
  CSetting  *Setting;
  CText     *Text;
  CWizard   *Wizard;
  CAtomInfo *AtomInfo;
  CSculptCache *SculptCache;
  CVFont    *VFont;
  CEditor   *Editor;
  CExecutive *Executive;
  CSeeker   *Seeker;
  CSelector *Selector;

};

/* the following transitional global will disappear once we've
   completely removed global state from PyMOL's code */
   
extern PyMOLGlobals *TempPyMOLGlobals;

/* not a global, but CRay widely used and Ray.h isn't lightweight... */

typedef struct _CRay               CRay;


#endif
