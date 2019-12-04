// GraphicsDLL.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "GraphicsDLL.h"


// This is an example of an exported variable
GRAPHICSDLL_API int nGraphicsDLL=0;

// This is an example of an exported function.
GRAPHICSDLL_API int fnGraphicsDLL(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CGraphicsDLL::CGraphicsDLL()
{
    return;
}
