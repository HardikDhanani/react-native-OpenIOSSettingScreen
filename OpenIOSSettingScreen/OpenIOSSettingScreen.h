//
//  OpenIOSSettingScreen.h
//  OpenIOSSettingScreen
//
//  Created by mac-0008 on 07/06/16.
//  Copyright © 2016 com.mi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <Foundation/Foundation.h>

@interface OpenIOSSettingScreen : NSObject

@property (nonatomic,readonly) UIImage *originalImage;

- (id)initWithImage:(UIImage *)image;
- (UIImage *)grayScaleImage;
- (UIImage *)oldImageWithIntensity:(CGFloat)level;

@end
