//
//  DCOTransparentScroller.h
//  Tapetrap
//
//  Created by Boy van Amstel on 06-01-14.
//  Copyright (c) 2014 Danger Cove. All rights reserved.
//

#import <Cocoa/Cocoa.h>

//! Project version number for DCOTransparentScroller.
FOUNDATION_EXPORT double DCOTransparentScrollerVersionNumber;

//! Project version string for DCOTransparentScroller.
FOUNDATION_EXPORT const unsigned char DCOTransparentScrollerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <DCOTransparentScroller/PublicHeader.h>

/**
 *  Doesn't draw the scroller track.
 *
 *  Source: http://stackoverflow.com/a/5252803/2219517
 */
@interface DCOTransparentScroller : NSScroller

@end
