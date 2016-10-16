//
//  UIImage+NBCut.h
//  NBBaseFrameCode
//
//  Created by NapoleonBai on 16/10/14.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
///指定区域截图
@interface UIImage (NBCut)

/*
 *  圆形图片
 */
@property (nonatomic,strong,readonly) UIImage *roundImage;


/**
 *  从给定UIView中截图：UIView转UIImage
 */
+(UIImage *)cutFromView:(UIView *)view;





/**
 *  直接截屏
 */
+(UIImage *)cutScreen;





/**
 *  从给定UIImage和指定Frame截图：
 */
-(UIImage *)cutWithFrame:(CGRect)frame;

@end
