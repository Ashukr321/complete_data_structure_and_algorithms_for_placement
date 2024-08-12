<!DOCTYPE html>
<html>
<head>
	<title>Data Structures and Algorithms Repository</title>
	<style>
		body {
			font-family: Arial, sans-serif;
			background-color: #f0f0f0;
		}
		h1 {
			font-size: 36px;
			color: #00698f;
		}
		h2 {
			font-size: 24px;
			color: #0099cc;
		}
		h3 {
			font-size: 18px;
			color: #33cc33;
		}
		.logo {
			width: 50px;
			height: 50px;
			margin: 10px;
		}
		.table-of-contents {
			background-color: #f7f7f7;
			padding: 10px;
			border: 1px solid #ddd;
		}
		.data-structures {
			background-color: #cce5ff;
			padding: 10px;
			border: 1px solid #aaa;
		}
		.algorithms {
			background-color: #ffe6cc;
			padding: 10px;
			border: 1px solid #aaa;
		}
	</style>
</head>
<body>
	<img src="cpp-logo.png" class="logo" alt="C++ Logo">
	<h1>Data Structures and Algorithms Repository</h1>
	<p>Welcome to my Data Structures and Algorithms repository, where I implement and explore various algorithms and data structures in C++. This repository is designed to provide a comprehensive collection of algorithms and data structures, along with their time and space complexities, to help developers and students learn and practice.</p>
	
	<div class="table-of-contents">
		<h2>Table of Contents</h2>
		<ul>
			<li><a href="#data-structures">Data Structures</a></li>
			<li><a href="#algorithms">Algorithms</a></li>
		</ul>
	</div>
	
	<div class="data-structures" id="data-structures">
		<h2>Data Structures</h2>
		<ul>
			<li>
				<h3>Arrays</h3>
				<p>Implementation: <a href="array.cpp">array.cpp</a></p>
				<p>Time Complexity: O(1) for access, O(n) for search</p>
				<p>Space Complexity: O(n)</p>
			</li>
			<li>
				<h3>Strings</h3>
				<p>Implementation: <a href="string.cpp">string.cpp</a></p>
				<p>Time Complexity: O(n) for search, O(n) for manipulation</p>
				<p>Space Complexity: O(n)</p>
			</li>
			<li>
				<h3>Linked Lists</h3>
				<p>Implementation: <a href="linkedlist.cpp">linkedlist.cpp</a></p>
				<p>Time Complexity: O(n) for search, O(1) for insertion/deletion</p>
				<p>Space Complexity: O(n)</p>
			</li>
			<li>
				<h3>Stacks</h3>
				<p>Implementation: <a href="stack.cpp">stack.cpp</a></p>
				<p>Time Complexity: O(1) for push/pop, O(n) for search</p>
				<p>Space Complexity: O(n)</p>
			</li>
			<li>
				<h3>Queues</h3>
				<p>Implementation: <a href="queue.cpp">queue.cpp</a></p>
				<p>Time Complexity: O(1) for enqueue/dequeue, O(n) for search</p>
				<p>Space Complexity: O(n)</p>
			</li>
			<li>
				<h3>Trees</h3>
				<p>Implementation: <a href="tree.cpp">tree.cpp</a></p>
				<p>Time Complexity: O(log n) for search, O(n) for insertion/deletion</p>
				<p>Space Complexity: O(n)</p>
			</li>
			<li>
				<h3>Graphs</h3>
				<p>Implementation: <a href="graph.cpp">graph.cpp</a></p>
				<p>Time Complexity: O(n) for search, O(n) for traversal</p>
				<p>Space Complexity: O(n)</p>
			</li>
		</ul>
	</div>
	
	<div class="algorithms" id="algorithms">
		<h2>

  	<div class="algorithms" id="algorithms">
		<h2>Algorithms</h2>
		<ul>
			<li>
				<h3>Sorting</h3>
				<ul>
					<li>
						<h4>Bubble Sort</h4>
						<p>Implementation: <a href="bubblesort.cpp">bubblesort.cpp</a></p>
						<p>Time Complexity: O(n^2)</p>
						<p>Space Complexity: O(1)</p>
					</li>
					<li>
						<h4>Selection Sort</h4>
						<p>Implementation: <a href="selectionsort.cpp">selectionsort.cpp</a></p>
						<p>Time Complexity: O(n^2)</p>
						<p>Space Complexity: O(1)</p>
					</li>
					<li>
						<h4>Insertion Sort</h4>
						<p>Implementation: <a href="insertionsort.cpp">insertionsort.cpp</a></p>
						<p>Time Complexity: O(n^2)</p>
						<p>Space Complexity: O(1)</p>
					</li>
					<li>
						<h4>Merge Sort</h4>
						<p>Implementation: <a href="mergesort.cpp">mergesort.cpp</a></p>
						<p>Time Complexity: O(n log n)</p>
						<p>Space Complexity: O(n)</p>
					</li>
					<li>
						<h4>Quick Sort</h4>
						<p>Implementation: <a href="quicksort.cpp">quicksort.cpp</a></p>
						<p>Time Complexity: O(n log n)</p>
						<p>Space Complexity: O(n)</p>
					</li>
				</ul>
			</li>
			<li>
				<h3>Searching</h3>
				<ul>
					<li>
						<h4>Linear Search</h4>
						<p>Implementation: <a href="linearsearch.cpp">linearsearch.cpp</a></p>
						<p>Time Complexity: O(n)</p>
						<p>Space Complexity: O(1)</p>
					</li>
					<li>
						<h4>Binary Search</h4>
						<p>Implementation: <a href="binarysearch.cpp">binarysearch.cpp</a></p>
						<p>Time Complexity: O(log n)</p>
						<p>Space Complexity: O(1)</p>
					</li>
				</ul>
			</li>
			<li>
				<h3>Graph Algorithms</h3>
				<ul>
					<li>
						<h4>Breadth-First Search (BFS)</h4>
						<p>Implementation: <a href="bfs.cpp">bfs.cpp</a></p>
						<p>Time Complexity: O(n + m)</p>
						<p>Space Complexity: O(n)</p>
					</li>
					<li>
						<h4>Depth-First Search (DFS)</h4>
						<p>Implementation: <a href="dfs.cpp">dfs.cpp</a></p>
						<p>Time Complexity: O(n + m)</p>
						<p>Space Complexity: O(n)</p>
					</li>
					<li>
						<h4>Dijkstra's Algorithm</h4>
						<p>Implementation: <a href="dijkstra.cpp">dijkstra.cpp</a></p>
						<p>Time Complexity: O(n log n + m)</p>
						<p>Space Complexity: O(n)</p>
					</li>
					<li>
						<h4>Floyd-Warshall Algorithm</h4>
						<p>Implementation: <a href="floydwarshall.cpp">floydwarshall.cpp</a></p>
						<p>Time Complexity: O(n^3)</p>
						<p>Space Complexity: O(n^2)</p>
					</li>
					<li>
						<h4>Topological Sort</h4>
						<p>Implementation: <a href="topologicalsort.cpp">topologicalsort.cpp</a></p>
						<p>Time Complexity: O(n + m)</p>
						<p>Space Complexity: O(n)</p>
					</li>
				</ul>
			</li>
			<li>
				<h3>Dynamic Programming</h3>
				<ul>
					<li>
						<h4>Fibonacci Series</h4>
						<p>Implementation: <a href="fibonacci.cpp">fibonacci
