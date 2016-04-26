//
//  ImageSizeTool.h
//  SmartStudy
//
//  Created by fantasy on 16/1/29.
//  Copyright © 2016年 Innobuddy Inc. All rights reserved.
//


#import <UIKit/UIKit.h>


#define ImageRealsizeTool [ImageSizeTool shareImageUrlTool]

typedef void(^downlownImageSucces)(CGSize imageRealSize,CGFloat ratio);
typedef void(^notComplete)();

@interface ImageSizeTool : NSObject


+ (instancetype)shareImageUrlTool;

- (void)imageUrlStringWithUrl:(NSString *)urlString andSuccessBlock:(downlownImageSucces)imageRealSize notComplet:(notComplete)notReal;



@end
