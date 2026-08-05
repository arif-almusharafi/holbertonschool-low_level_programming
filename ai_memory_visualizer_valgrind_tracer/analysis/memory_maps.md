stack_example.c

main()
+----------------------+
| main                 |
|----------------------|
| return address       |
+----------------------+

Heap
(empty)

Stack Excution Point2: walk_stack(0, 3)
+----------------------+
| walk_stack           |
| depth = 0            |
| max_depth = 3        |
| marker = 0           |
+----------------------+
| main                 |
+----------------------+

Heap
(empty)

Execution Point 3: dump_frame("enter",0)
+----------------------+
| dump_frame           |
| label                |
| depth = 0            |
| local_int = 100      |
| local_buf[16]        |
| p_local ----------+
+------------------|---+
                   |
                   v
             local_int

Heap
(empty)

when: walk_stack(depth + 1, max_depth);

walk_stack(depth=3)

walk_stack(depth=2)

walk_stack(depth=1)

walk_stack(depth=0)

main
