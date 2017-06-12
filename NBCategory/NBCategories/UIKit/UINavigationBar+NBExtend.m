//
//  UINavigationBar+NBExtend.m
//  NBCategory
//
//  Created by NapoleonBai on 16/10/19.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import "UINavigationBar+NBExtend.h"

@implementation UINavigationBar (NBExtend)


- (void)nb_setBackgroundColor:(UIColor *)backgroundColor {
    [self setBackgroundImage:[self imageWithColor:backgroundColor size:CGSizeMake(self.bounds.size.width, self.bounds.size.height)] forBarMetrics:UIBarMetricsDefault];
}

- (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size
{
    CGRect rect = CGRectMake(0, 0, size.width, size.height);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context,color.CGColor);
    CGContextFillRect(context, rect);
    UIImage *img = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    
    return img;
}

- (void)nb_setTranslationY:(CGFloat)translationY {
    
    self.transform = CGAffineTransformMakeTranslation(1,translationY);
}

- (void)nb_setElementsAlpha:(CGFloat)alpha {
    [[self valueForKey:@"_leftViews"] enumerateObjectsUsingBlock:^(UIView *view, NSUInteger idx, BOOL * _Nonnull stop) {
        view.alpha = alpha;
    }];
    
    [[self valueForKey:@"_rightViews"] enumerateObjectsUsingBlock:^(UIView *view, NSUInteger idx, BOOL * _Nonnull stop) {
        view.alpha = alpha;
    }];
    
    UIView *titleView = [self valueForKey:@"_titleView"];
    titleView.alpha = alpha;
    
}

- (void)nb_reset
{
    [self setBackgroundImage:nil forBarMetrics:UIBarMetricsDefault];
    
}

@end


