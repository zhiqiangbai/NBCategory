//
//  UINavigationBar+NBExtend.h
//  NBCategory
//
//  Created by NapoleonBai on 16/10/19.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  提供导航栏的背景色.透明度,偏移量等属性的设置
 */
@interface UINavigationBar (NBExtend)

/**
 *  设置背景色
 *
 */
- (void)nb_setBackgroundColor:(UIColor *)backgroundColor;

/**
 *  设置透明度
 *
 *  @param alpha 透明度 0-1
 */
- (void)nb_setElementsAlpha:(CGFloat)alpha;


/**
 *  设置y轴上的偏移量
 *
 *  @param translationY y轴偏移量
 */
- (void)nb_setTranslationY:(CGFloat)translationY;


/**
 *  重置overlayer
 */
- (void)nb_reset;


@end
