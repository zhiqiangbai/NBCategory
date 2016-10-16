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


@end
