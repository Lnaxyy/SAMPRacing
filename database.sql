CREATE TABLE `users` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `username` varchar(24) NOT NULL,
  `password` varchar(128) NOT NULL,
  `language` enum('de','en') NOT NULL,
  `isAdmin` tinyint(1) NOT NULL DEFAULT '0',
  `posX` float DEFAULT NULL,
  `posY` float DEFAULT NULL,
  `posZ` float DEFAULT NULL,
  `angle` float DEFAULT NULL,
  `interior` int(11) DEFAULT NULL,
  `registerDate` datetime NOT NULL,
  `lastLogin` datetime DEFAULT NULL,
  PRIMARY KEY (`id`),
  UNIQUE KEY `username` (`username`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;
