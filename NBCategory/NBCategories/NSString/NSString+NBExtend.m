//
//  NSString+NBExtend
//  NBCategories
//
//  Created by NapoleonBai on 16/10/14.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import "NSString+NBExtend.h"


NSString const * HOST = @"http://112.2.2.2";

@implementation NSString (APPExtend)

-(NSString *)resourceURL_OC{if (self.length == 0) return nil;return [NSString stringWithFormat:@"%@%@",HOST,self];}

-(NSString *)completeURL_OC{if (self.length == 0) return nil;return [NSString stringWithFormat:@"%@%@",HOST,self];}

- (CGFloat)stringWidthByFont:(UIFont *)font withHeight:(CGFloat)height{
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc]init];
    paragraphStyle.lineBreakMode = NSLineBreakByWordWrapping;
    NSDictionary *attributes = @{NSFontAttributeName:font,NSParagraphStyleAttributeName:paragraphStyle.copy};
    CGRect rectToFit = [self boundingRectWithSize:CGSizeMake(CGFLOAT_MAX, height) options: NSStringDrawingUsesLineFragmentOrigin attributes:attributes context:nil];
    return rectToFit.size.width;
}

- (CGRect)stringRectByFont:(UIFont *)font withSize:(CGSize)size{
    NSDictionary *dict = [NSDictionary dictionaryWithObject:font forKey:NSFontAttributeName];
    CGRect rect = [self boundingRectWithSize:size options:NSStringDrawingUsesLineFragmentOrigin attributes:dict context:nil];
    return rect;
}

@end
