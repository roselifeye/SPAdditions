//
//  UIImage+Addtions.h
//  HKToilet
//
//  Created by Roselifeye on 14-5-6.
//  Copyright (c) 2014年 Roselifeye. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Addtions)

- (UIImage *)blurryWithBlurLevel:(CGFloat)blur;

- (UIImage *)scaletoSize:(CGSize)size;

- (UIImage*)getSubImage:(CGRect)rect;

//Rotate
- (UIImage *)imageRotatedByRadians:(CGFloat)radians;
- (UIImage *)imageRotatedByDegrees:(CGFloat)degrees;

@end
