//
//  UIImage+NBReMake.h
//  NBCategories
//
//  Created by NapoleonBai on 16/10/14.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (NBReMake)


-(UIImage *)remakeImageWithFullSize:(CGSize)fullSize scale:(CGFloat)scale;

+(UIImage *)placeHolderImageWithSize:(CGSize)fullSize scale:(CGFloat)scale;

+(UIImage *)placeHolderImageWithSize:(CGSize)fullSize;

+(UIImage *)placeHolderWithWH:(CGFloat)wh s:(CGFloat)s;

@end
