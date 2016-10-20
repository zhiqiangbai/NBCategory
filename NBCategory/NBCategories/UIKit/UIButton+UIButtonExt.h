//
//  UIButton+UIButtonExt.h
//  NAPOLEONBAI INTEGRATED BASE PROJECT
//
//  Created by NapoleonBai on 15/8/26.
//  Copyright (c) 2015年 NapoleonBai. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  扩展UIButton,提供调整图片与文字相应位置的方法
 */
@interface UIButton (UIButtonExt)
/**
 *  设置上图下文字,指定间距
 *
 *  @param space 行间距
 */
- (void)centerImageAndTitle:(float)space;

/**
 *  设置上图下文,默认间距
 */
- (void)centerImageAndTitle;

/**
 *  设置左文右图片
 *
 *  @param spacing 间距
 */
- (void)rightImageLeftTitle:(float)spacing;


@end
