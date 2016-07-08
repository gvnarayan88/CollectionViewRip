//
//  ViewController.h
//  CollectionView
//
//  Created by VEERA NARAYANA GUTTI on 09/07/15.
//  Copyright (c) 2015 VEERA NARAYANA GUTTI. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UICollectionViewDataSource,UICollectionViewDelegate>
@property (weak, nonatomic) IBOutlet UICollectionView *myCollectionView;


@end
