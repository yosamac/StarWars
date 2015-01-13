//
//  YOSCharacterViewController.h
//  StarWars
//
//  Created by Yosnier on 12/01/15.
//  Copyright (c) 2015 yos. All rights reserved.
//


@import UIKit;
#import "YOSStarWarsCharacter.h"
#import "CafPlayer.h"


@interface YOSCharacterViewController : UIViewController


@property (strong, nonatomic) YOSStarWarsCharacter *model;
//@property (weak , nonatomic)IBOutlet UILabel *lbName;
//@property (weak, nonatomic) IBOutlet UILabel *lbAlias;
@property (strong, nonatomic) NSURL *lbWikiPage;
@property (weak, nonatomic) IBOutlet UIImageView *imPhoto;
@property (strong, nonatomic) NSData *soundData;
@property (strong, nonatomic) CafPlayer *player;



-(IBAction)playSound:(id)sender;

-(IBAction)displayWikipedia:(id)sender;


-(id) initWithModel:(YOSStarWarsCharacter *)model;

@end
