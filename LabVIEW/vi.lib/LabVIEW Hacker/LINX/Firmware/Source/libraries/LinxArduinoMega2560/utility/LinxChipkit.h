/****************************************************************************************
**  LINX header for chipKIT family of devices.
**
**  For more information see:           www.labviewhacker.com/linx
**  For support visit the forums at:    www.labviewhacker.com/forums/linx
**  
**  Written By Sam Kristoff
**
** MIT license.
****************************************************************************************/	

#ifndef LINX_CHIPKIT_H
#define LINX_CHIPKIT_H

/****************************************************************************************
**  Defines
****************************************************************************************/
#include "LinxDevice.h"
#include "LinxWiringDevice.h"
	
class LinxChipkit : public LinxWiringDevice
{
	public:	
		/****************************************************************************************
		**  Variables
		****************************************************************************************/		
		
		/****************************************************************************************
		**  Constructors /  Destructor
		****************************************************************************************/
		LinxChipkit();
		
		/****************************************************************************************
		**  Functions
		****************************************************************************************/
		
	private:
		/****************************************************************************************
		**  Variables
		****************************************************************************************/		
				
		
		/****************************************************************************************
		**  Functions
		****************************************************************************************/
	
};

#endif //LINX_CHIPKIT_H