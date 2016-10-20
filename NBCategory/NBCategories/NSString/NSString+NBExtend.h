//
//  NSString+NBExtend
//  NBCategories
//
//  Created by NapoleonBai on 16/10/14.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NSString (NBExtend)

@property (nonatomic,copy,readonly) NSString *resourceURL_OC,*completeURL_OC;
/**
 *  得到string所占区域大小
 *
 *  @param font string 字体大小
 *  @param size 限制size
 *
 *  @return 计算出的区域
 */
- (CGRect)stringRectByFont:(UIFont *)font withSize:(CGSize)size;
/**
 *  根据字体和高度来计算string所占宽度
 *
 *  @param font   字体大小
 *  @param height 高度
 *
 *  @return 宽度
 */
- (CGFloat)stringWidthByFont:(UIFont *)font withHeight:(CGFloat)height;

@end
