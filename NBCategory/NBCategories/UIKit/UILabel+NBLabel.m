//
//  UILabel+NBLabel.m
//  NAPOLEONBAI INTEGRATED BASE PROJECT
//
//  Created by NapoleonBai on 15/7/22.
//  Copyright (c) 2015年 NapoleonBai. All rights reserved.
//

#import "UILabel+NBLabel.h"

@implementation UILabel (NBLabel)

- (void)setText:(NSString *)text withPartTextColor:(UIColor *)color withPartText:(NSString *)partText withPartFont:(UIFont *)partFont{

    if (!text) {
        [self setText:text];
    }else{
        NSDictionary *attribs = @{
                                  NSForegroundColorAttributeName:self.textColor,
                                  NSFontAttributeName:self.font
                                  };
        NSMutableAttributedString *attributedText =
        [[NSMutableAttributedString alloc] initWithString:text
                                               attributes:attribs];
        NSRange updateRange =[text rangeOfString:partText];
                
        [attributedText setAttributes:@{NSForegroundColorAttributeName:color,NSFontAttributeName:partFont} range:updateRange];
        
        [self setAttributedText:attributedText];
    }
}
/**
 *  设置制定字体颜色,大小等
 *
 *  @param text   文字
 *  @param parmas 配置参数  eg:@[@{@"text":@"testStr",@"color":[UIColor blackColor],@"font":[UIFont systemFont:14]}]
 */
- (void)setText:(NSString *)text text_color_font:(NSArray *)parmas{
    if (!text) {
        [self setText:text];
    }else{
        NSDictionary *attribs = @{
                                  NSForegroundColorAttributeName:self.textColor,
                                  NSFontAttributeName:self.font
                                  };
        NSMutableAttributedString *attributedText =
        [[NSMutableAttributedString alloc] initWithString:text
                                               attributes:attribs];
        
        
        for (NSDictionary *dict in parmas) {
            NSRange updateRange =[text rangeOfString:dict[@"text"]];
            [attributedText setAttributes:@{NSForegroundColorAttributeName:dict[@"color"],NSFontAttributeName:dict[@"font"]} range:updateRange];
        }
        
        [self setAttributedText:attributedText];
    }

}

- (void)setText:(NSString *)text withPartTextColor:(UIColor *)color withTextArray:(NSArray<NSString *> *)partText withPartFont:(UIFont *)partFont{
    if (!text) {
        [self setText:text];
    }else{
        NSDictionary *attribs = @{
                                  NSForegroundColorAttributeName:self.textColor,
                                  NSFontAttributeName:self.font
                                  };
        NSMutableAttributedString *attributedText =
        [[NSMutableAttributedString alloc] initWithString:text
                                               attributes:attribs];
        
        
        for (NSString *str in partText) {
            NSRange updateRange =[text rangeOfString:str];
            [attributedText setAttributes:@{NSForegroundColorAttributeName:color,NSFontAttributeName:partFont} range:updateRange];
        }
        
        [self setAttributedText:attributedText];
    }

}

@end
