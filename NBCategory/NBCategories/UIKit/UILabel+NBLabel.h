//
//  UILabel+NBLabel.h
//  NAPOLEONBAI INTEGRATED BASE PROJECT
//
//  Created by NapoleonBai on 15/7/22.
//  Copyright (c) 2015年 NapoleonBai. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *  设置特殊文字的显示
 */
@interface UILabel (NBLabel)
/**
 *  设置文字并指定文字颜色,大小等
 *
 *  @param text     显示文本
 *  @param color    指定显示文本颜色
 *  @param partText 指定要处理的文字
 *  @param partFont 文字大小
 */
- (void)setText:(NSString *)text withPartTextColor:(UIColor *)color withPartText:(NSString *)partText withPartFont:(UIFont *)partFont;


/**
 *  设置指定字体颜色,大小等
 *
 *  @param text   文字
 *  @param parmas 配置参数  eg:@[@{@"text":@"testStr",@"color":[UIColor blackColor],@"font":[UIFont systemFont:14]}]
 */
- (void)setText:(NSString *)text text_color_font:(NSArray *)parmas;

/**
 *  设置指定文字的颜色,大小
 *
 *  @param text     显示的文字
 *  @param color    统一颜色
 *  @param partText 指定的文字字符串数组
 *  @param partFont 统一大小
 */
- (void)setText:(NSString *)text withPartTextColor:(UIColor *)color withTextArray:(NSArray<NSString *> *)partText withPartFont:(UIFont *)partFont;

@end
