//
//  DAPageContainerScrollView.h
//  DAPagesContainerScrollView
//
//  Created by Daria Kopaliani on 5/29/13.
//  Copyright (c) 2013 Daria Kopaliani. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol DAPagesContainerDelegate;

@interface DAPagesContainer : UIViewController

@property (strong, nonatomic) NSArray *viewControllers;
@property (assign, nonatomic) NSUInteger selectedIndex;

@property (assign, nonatomic) NSUInteger topBarHeight;
@property (assign, nonatomic) CGSize pageIndicatorViewSize;
@property (strong, nonatomic) UIColor *topBarBackgroundColor;
@property (strong, nonatomic) UIFont *topBarItemLabelsFont;
@property (strong, nonatomic) UIColor *pageItemsTitleColor;
@property (strong, nonatomic) UIColor *selectedPageItemTitleColor;
@property (strong, nonatomic) UIColor *borderGlowColor;
@property (assign, nonatomic) NSObject<DAPagesContainerDelegate> *delegate;

- (void)setSelectedIndex:(NSUInteger)selectedIndex animated:(BOOL)animated;
- (void)updateLayoutForNewOrientation:(UIInterfaceOrientation)orientation;
- (void)layoutSubviews;

@end

@protocol DAPagesContainerDelegate <NSObject>

- (void)pagesContainer:(DAPagesContainer *)container didSelectIndex:(NSUInteger)index;

@end