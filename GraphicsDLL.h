// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the GRAPHICSDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// GRAPHICSDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef GRAPHICSDLL_EXPORTS
#define GRAPHICSDLL_API __declspec(dllexport)
#else
#define GRAPHICSDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class GRAPHICSDLL_API CGraphicsDLL {
public:
	CGraphicsDLL(void);
	// TODO: add your methods here.
};

extern GRAPHICSDLL_API int nGraphicsDLL;

GRAPHICSDLL_API int fnGraphicsDLL(void);
