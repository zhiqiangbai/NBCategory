#
#  Be sure to run `pod spec lint DRSAlertDialog.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see http://docs.cocoapods.org/specification.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |s|

    # ―――  Spec Metadata  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――― #
    #
    #  These will help people to find your library, and whilst it
    #  can feel like a chore to fill in it's definitely to your advantage. The
    #  summary should be tweet-length, and the description more in depth.
    #

    s.name         = "NBCategory"
    s.version      = "0.1.0"
    s.summary      = "提供项目需要的一些分类设置代码"

    #s.description  = <<-DESC
    #                  主要提供了一部分的分类设置,主要就是为了方便
    #                 DESC

    s.homepage     = "https://github.com/NapoleonBaiAndroid/NBCategory"
    s.license      = "MIT"

    s.author             = { "NapoleonBai" => "napoleonbaiandroid@gmail.com" }

    s.source       = { :git => "https://github.com/NapoleonBaiAndroid/NBCategory.git", :tag => "0.1.0", :submodules => true }



    s.source_files  = "NBCategory/NBCategories/NBCategory.h"
    s.public_header_files = 'NBCategory/NBCategories/NBCategory.h'

    s.platform = :ios
    s.requires_arc = true

    s.subspec 'NSDate' do |ss|
        ss.source_files = 'NBCategory/NBCategories/NSDate/*.{h,m}'
        ss.public_header_files = 'NBCategory/NBCategories/NSDate/*.h'
    end
    s.subspec 'NSString' do |ss|
        ss.source_files = 'NBCategory/NBCategories/NSString/*.{h,m}'
        ss.public_header_files = 'NBCategory/NBCategories/NSString/*.h'
    end

    s.subspec 'UIColor' do |ss|
        ss.source_files = 'NBCategory/NBCategories/UIColor/*.{h,m}'
        ss.public_header_files = 'NBCategory/NBCategories/UIColor/*.h'
    end

    s.subspec 'UIImage' do |ss|
        ss.source_files = 'NBCategory/NBCategories/UIImage/*.{h,m}'
        ss.public_header_files = 'NBCategory/NBCategories/UIImage/*.h'
    end

    s.subspec 'UIImageView' do |ss|
        ss.source_files = 'NBCategory/NBCategories/UIImageView/*.{h,m}'
        ss.public_header_files = 'NBCategory/NBCategories/UIImageView/*.h'
    end

    s.subspec 'UIKit' do |ss|
        ss.source_files = 'NBCategory/NBCategories/UIKit/*.{h,m}'
        ss.public_header_files = 'NBCategory/NBCategories/UIKit/*.h'
    end
end
