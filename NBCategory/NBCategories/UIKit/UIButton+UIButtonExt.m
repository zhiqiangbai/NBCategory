//
//  UIButton+UIButtonExt.m
//  NAPOLEONBAI INTEGRATED BASE PROJECT
//
//  Created by NapoleonBai on 15/8/26.
//  Copyright (c) 2015年 NapoleonBai. All rights reserved.
//

#import "UIButton+UIButtonExt.h"

@implementation UIButton (UIButtonExt)
- (void)centerImageAndTitle:(float)spacing
{
    // get the size of the elements here for readability
    CGSize imageSize = self.imageView.frame.size;
    CGSize titleSize = self.titleLabel.frame.size;
    
    // get the height they will take up as a unit
    CGFloat totalHeight = (imageSize.height + titleSize.height + spacing);
    
    // raise the image and push it right to center it
    self.imageEdgeInsets = UIEdgeInsetsMake(- (totalHeight - imageSize.height), 0.0, 0.0, - titleSize.width);
    
    // lower the text and push it left to center it
    self.titleEdgeInsets = UIEdgeInsetsMake(0.0, - imageSize.width, - (totalHeight - titleSize.height),0.0);
}

- (void)rightImageLeftTitle:(float)spacing
{
    // get the size of the elements here for readability
    CGSize imageSize = self.imageView.frame.size;
    CGSize titleSize = self.titleLabel.frame.size;
    
    //    CGFloat totalWidth = (imageSize.width + titleSize.width + spacing);
    
    self.imageEdgeInsets = UIEdgeInsetsMake(0.0, titleSize.width+spacing, 0.0, 0.0);
    
    self.titleEdgeInsets = UIEdgeInsetsMake(0.0, - imageSize.width-spacing, 0.0 ,0.0);
}

- (void)centerImageAndTitle
{
    const int DEFAULT_SPACING = 6.0f;
    [self centerImageAndTitle:DEFAULT_SPACING];
}
@end
