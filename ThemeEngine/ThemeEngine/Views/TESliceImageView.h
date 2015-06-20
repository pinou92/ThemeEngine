//
//  TESliceImageView.h
//  ThemeEngine
//
//  Created by Alexander Zielenski on 6/19/15.
//  Copyright © 2015 Alex Zielenski. All rights reserved.
//

#import <ThemeKit/TKBitmapRendition.h>
@import Cocoa;

@interface TESliceImageView : NSView
@property (nonatomic, strong) NSBitmapImageRep *image;
@property (nonatomic, strong) NSArray *sliceRects;
// We support displaying
// CoreThemeTypeOnePart
// CoreThemeTypeThreePartHorizontal
// CoreThemeTypeThreePartVertical
// CoreThemeTypeNinePart
@property (nonatomic) CoreThemeType renditionType;

@property (nonatomic) NSEdgeInsets sliceInsets; // for slicing
@property (nonatomic) NSEdgeInsets edgeInsets; // for metrics

// KVO slicing handles
@property CGFloat leftHandlePosition;
@property CGFloat rightHandlePosition;
@property CGFloat topHandlePosition;
@property CGFloat bottomHandlePosition;
@end