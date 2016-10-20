//
//  UIColor+NBExtend.h
//  NBCategories
//
//  Created by NapoleonBai on 16/10/14.
//  Copyright © 2016年 BaiZhiqiang. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface UIColor (NBExtend)

/**
 *  自定义透明度和颜色值生成颜色
 *
 *  @param hexValue   十六进制颜色值 0xFFFFFF
 *  @param alphaValue 透明度 0.0~1.0
 *
 *  @return 生成的颜色
 */
+ (UIColor*)colorWithHex:(NSInteger)hexValue alpha:(CGFloat)alphaValue;
    
/**
 *  自定义颜色值生成颜色(为不透明)
 *
 *  @param hexValue   十六进制颜色值 0xFFFFFF
 *
 *  @return 生成的颜色
 */
+ (UIColor*)colorWithHex:(NSInteger)hexValue;
    
/**
 *  获取指定颜色的十六进制值
 *
 *  @param color 指定颜色
 *
 *  @return 十六进制字符串
 */
+ (NSString *)hexFromUIColor:(UIColor*)color;


@end

/** 普通定义 */
#define rgb(r,g,b) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:1.0f]
#define rgba(r,g,b,a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define hexColor(colorV) [UIColor colorWithHex:colorV]
#define hexColorAlpha(colorV,a) [UIColor colorWithHex:colorV alpha:a]

/** 随机色 */
#define RamdomColor [UIColor colorWithRed:arc4random_uniform(256)/255.0f green:arc4random_uniform(256)/255.0f blue:arc4random_uniform(256)/255.0f alpha:1.0f]

/** 常用颜色 */
#define NBGrey          [UIColor colorWithRed:246.0 / 255.0 green:246.0 / 255.0 blue:246.0 / 255.0 alpha:1.0f]
#define NBLightBlue     [UIColor colorWithRed:94.0 / 255.0 green:147.0 / 255.0 blue:196.0 / 255.0 alpha:1.0f]
#define NBGreen         [UIColor colorWithRed:77.0 / 255.0 green:186.0 / 255.0 blue:122.0 / 255.0 alpha:1.0f]
#define NBTitleColor    [UIColor colorWithRed:0.0 / 255.0 green:189.0 / 255.0 blue:113.0 / 255.0 alpha:1.0f]
#define NBButtonGrey    [UIColor colorWithRed:141.0 / 255.0 green:141.0 / 255.0 blue:141.0 / 255.0 alpha:1.0f]
#define NBLightGreen    [UIColor colorWithRed:77.0 / 255.0 green:216.0 / 255.0 blue:122.0 / 255.0 alpha:1.0f]
#define NBFreshGreen    [UIColor colorWithRed:77.0 / 255.0 green:196.0 / 255.0 blue:122.0 / 255.0 alpha:1.0f]
#define NBDeepGreen     [UIColor colorWithRed:77.0 / 255.0 green:176.0 / 255.0 blue:122.0 / 255.0 alpha:1.0f]
#define NBRed           [UIColor colorWithRed:245.0 / 255.0 green:94.0 / 255.0 blue:78.0 / 255.0 alpha:1.0f]
#define NBMauve         [UIColor colorWithRed:88.0 / 255.0 green:75.0 / 255.0 blue:103.0 / 255.0 alpha:1.0f]
#define NBBrown         [UIColor colorWithRed:119.0 / 255.0 green:107.0 / 255.0 blue:95.0 / 255.0 alpha:1.0f]
#define NBBlue          [UIColor colorWithRed:82.0 / 255.0 green:116.0 / 255.0 blue:188.0 / 255.0 alpha:1.0f]
#define NBDarkBlue      [UIColor colorWithRed:121.0 / 255.0 green:134.0 / 255.0 blue:142.0 / 255.0 alpha:1.0f]
#define NBYellow        [UIColor colorWithRed:242.0 / 255.0 green:197.0 / 255.0 blue:117.0 / 255.0 alpha:1.0f]
#define NBWhite         [UIColor colorWithRed:255.0 / 255.0 green:255.0 / 255.0 blue:255.0 / 255.0 alpha:1.0f]
#define NBDeepGrey      [UIColor colorWithRed:99.0 / 255.0 green:99.0 / 255.0 blue:99.0 / 255.0 alpha:1.0f]
#define NBPinkGrey      [UIColor colorWithRed:200.0 / 255.0 green:193.0 / 255.0 blue:193.0 / 255.0 alpha:1.0f]
#define NBHealYellow    [UIColor colorWithRed:245.0 / 255.0 green:242.0 / 255.0 blue:238.0 / 255.0 alpha:1.0f]
#define NBLightGrey     [UIColor colorWithRed:225.0 / 255.0 green:225.0 / 255.0 blue:225.0 / 255.0 alpha:1.0f]
#define NBCleanGrey     [UIColor colorWithRed:251.0 / 255.0 green:251.0 / 255.0 blue:251.0 / 255.0 alpha:1.0f]
#define NBLightYellow   [UIColor colorWithRed:241.0 / 255.0 green:240.0 / 255.0 blue:240.0 / 255.0 alpha:1.0f]
#define NBDarkYellow    [UIColor colorWithRed:152.0 / 255.0 green:150.0 / 255.0 blue:159.0 / 255.0 alpha:1.0f]
#define NBPinkDark      [UIColor colorWithRed:170.0 / 255.0 green:165.0 / 255.0 blue:165.0 / 255.0 alpha:1.0f]
#define NBCloudWhite    [UIColor colorWithRed:244.0 / 255.0 green:244.0 / 255.0 blue:244.0 / 255.0 alpha:1.0f]
#define NBBlack         [UIColor colorWithRed:45.0 / 255.0 green:45.0 / 255.0 blue:45.0 / 255.0 alpha:1.0f]
#define NBStarYellow    [UIColor colorWithRed:252.0 / 255.0 green:223.0 / 255.0 blue:101.0 / 255.0 alpha:1.0f]
#define NBTwitterColor  [UIColor colorWithRed:0.0 / 255.0 green:171.0 / 255.0 blue:243.0 / 255.0 alpha:1.0]
#define NBWeiboColor    [UIColor colorWithRed:250.0 / 255.0 green:0.0 / 255.0 blue:33.0 / 255.0 alpha:1.0]
#define NBiOSGreenColor [UIColor colorWithRed:98.0 / 255.0 green:247.0 / 255.0 blue:77.0 / 255.0 alpha:1.0]
